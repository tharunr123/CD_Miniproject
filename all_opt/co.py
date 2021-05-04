import time
f = open("icg_output.txt","r")
fout = open("out.txt","w")
list_of_lines = f.readlines()
dictValues = dict()
constantFoldedList = []
print("Quadruple form after Constant Propagation and Constant Folding :- \n")
for i in list_of_lines:
    i = i.strip("\n")
    op,arg1,arg2,res = i.split()
    if(op in ["+","-","*","/"]):
        if(arg1.isdigit() and arg2.isdigit()):
            result = eval(arg1+op+arg2)
            dictValues[res] = result
            print("=",result,"NULL",res)
            constantFoldedList.append(["=",result,"NULL",res])
        elif(arg1.isdigit()):
            if(arg2 in dictValues):
                result = eval(arg1+op+dictValues[arg2])
                dictValues[res] = result
                print("=",result,"NULL",res)
                constantFoldedList.append(["=",result,"NULL",res])
            else:
                print(op,arg1,arg2,res)
                constantFoldedList.append([op,arg1,arg2,res])
        elif(arg2.isdigit()):
            if(arg1 in dictValues):
                result = eval(dictValues[arg1]+op+arg2)
                dictValues[res] = result
                print("=",result,"NULL",res)
                constantFoldedList.append(["=",result,"NULL",res])
            else:
                print(op,arg1,arg2,res)
                constantFoldedList.append([op,arg1,arg2,res])
        else:
            flag1=0
            flag2=0
            arg1Res = arg1
            if(arg1 in dictValues):
                arg1Res = str(dictValues[arg1])
                flag1 = 1
            arg2Res = arg2
            if(arg2 in dictValues):
                arg2Res = str(dictValues[arg2])
                flag2 = 1
            if(flag1==1 and flag2==1):
                result = eval(arg1Res+op+arg2Res)
                dictValues[res] = result
                print("=",result,"NULL",res) 
                constantFoldedList.append(["=",result,"NULL",res])
            else:
                print(op,arg1Res,arg2Res,res)
                constantFoldedList.append([op,arg1Res,arg2Res,res])
            
    elif(op=="="):
        if(arg1.isdigit()):
            dictValues[res]=arg1
            print("=",arg1,"NULL",res)
            constantFoldedList.append(["=",arg1,"NULL",res])
        else:
            if(arg1 in dictValues):
                print("=",dictValues[arg1],"NULL",res)
                constantFoldedList.append(["=",dictValues[arg1],"NULL",res])
            else:
                print("=",arg1,"NULL",res)
                constantFoldedList.append(["=",arg1,"NULL",res])
    
    else:
        print(op,arg1,arg2,res)
        constantFoldedList.append([op,arg1,arg2,res])

print("\n")
print("Expression :- \n")
for i in constantFoldedList:
    if(i[0]=="="):
        print(i[3],i[0],i[1])
    elif(i[0] in ["+","-","*","/","==","<=","<",">",">="]):
        print(i[3],"=",i[1],i[0],i[2])
    elif(i[0] in ["if","goto","label","not"]):
        if(i[0]=="if"):
            print(i[0],i[1],"goto",i[3])
        if(i[0]=="goto"):
            print(i[0],i[3])
        if(i[0]=="label"):
            print(i[3],":")
        if(i[0]=="not"):
            print(i[3],"=",i[0],i[1])


print("\n")

#Deadcode
print("Expression after DCE :- \n")
for i in constantFoldedList:
    if(i[0]=="="):
        pass
    elif(i[0] in ["+","-","*","/","==","<=","<",">",">="]):
        print(i[3],"=",i[1],i[0],i[2])
    elif(i[0] in ["if","goto","label","not"]):
        if(i[0]=="if"):
            print(i[0],i[1],"goto",i[3])
        if(i[0]=="goto"):
            print(i[0],i[3])
        if(i[0]=="label"):
            print(i[3],":")
        if(i[0]=="not"):
            print(i[3],"=",i[0],i[1])
def existslabel(lines, i):

    if(i == 0):

        return 0

    while(i>=0):

        if(len(lines[i].split()) == 2):

            return 1

        i = i - 1

    return 0

        

def exists_lhs(lines, variable, start, end):

    for i in range(start, end):

        if(lines[i].split()[0] == variable):

            return 1

    return 0

def exists_rhs(lines, lhs, start):

    for i in range(len(lines)-1, start-1, -1):

        if(len(lines[i].split()) == 5):

            rhs1 = lines[i].split()[2]

            rhs2 = lines[i].split()[4]

            if(rhs1 == lhs or rhs2 == lhs):              

                return i

        elif(len(lines[i].split()) == 3):

            rhs = lines[i].split()[2]

            if(rhs == lhs):

                return i

        elif(len(lines[i].split()) == 4):

            rhs = lines[i].split()[1]

            l1 = ""

            l2 = ""

            fl = 0

            for x in rhs:

                if x in [">", "<", "=", "!"]:

                    fl = 1

                    continue

                if (x == "="):

                    continue

                if(fl == 0):

                    l1 = l1 + x

                if(fl == 1):

                    l2 = l2 + x

            if(l1 == lhs or l2 == lhs):

                return i

    return -1
            
def findLoopLines(lines):

    gotoindex = dict()

    loopblock = []

    labelindex = dict()

    for i in range(len(lines)):

        lines[i] = lines[i].strip("\n")

        if(len(lines[i].split())==2 and lines[i].split()[0] == 'goto'):

            gotoindex[lines[i].split()[1]] = i

        if(len(lines[i].split()) == 2 and lines[i].split()[1] == ':'):

            labelindex[lines[i].split()[0]] = i

    for key in gotoindex:

        if(gotoindex[key]>labelindex[key]):

            loopblock.append([labelindex[key], gotoindex[key]])

    return loopblock



def loopMotion(lines):

    for i in range(len(lines)):

        lines[i] = lines[i].strip("\n")

    loopblock = findLoopLines(lines)

    for i in loopblock:

        initloc = i[0]

        for j in range(i[0], i[1]):

            

                

            if(len(lines[j].split()) == 3 and (lines[j].split()[0][0]!='*' and lines[j].split()[2].isdigit())):

                temp = lines.pop(j)

                lines.insert(initloc, temp)

                initloc+=1

            if(len(lines[j].split())==3 and (lines[j].split()[0][0]!='*' and lines[j].split()[2][0]!='*')):

                arg = lines[j].split()[2]

                

                if(not exists_lhs(lines, arg, initloc, i[1])):

                    temp = lines.pop(j)

                    lines.insert(initloc, temp)

                    initloc+=1

            if(len(lines[j].split()) == 5):

                arg1 = lines[j].split()[2]

                arg2 = lines[j].split()[4]

                

                if(arg1.isdigit() and arg2.isdigit() and (lines[j].split()[0][0]!='*')):

                    temp = lines.pop(j)

                    lines.insert(initloc, temp)

                    initloc+=1

                elif(arg1.isdigit()and (arg2[0]!='*' and lines[j].split()[0][0]!='*')):

                    if(not exists_lhs(lines, arg2, initloc, i[1])):

                       temp = lines.pop(j)

                       lines.insert(i[0], temp)

                elif(arg2.isdigit()and (arg1[0]!='*' and lines[j].split()[0][0]!='*')):

                    if(not exists_lhs(lines, arg1, initloc, i[1])):

                        temp = lines.pop(j)

                        lines.insert(initloc, temp)

                        initloc+=1

                else:

                    if(not exists_lhs(lines, arg1, initloc, i[1]) and not exists_lhs(lines, arg2, initloc, i[1]) and (arg1[0]!='*' and arg2[0]!='*' and lines[j].split()[0][0]!='*')):

                        temp  = lines.pop(j)

                        lines.insert(initloc, temp)

                        initloc+=1

            

                        

                        

            

                

                

    return lines, loopblock
def checkArray(token, lines, i):

    if('[' in token):

        newptr = "*"

        sub = ""

        trav = 0

        while(token[trav]!='['):

            newptr+=token[trav]

            trav+=1

        trav+=1

        while(token[trav]!=']'):

            sub+=token[trav]

            trav+=1

        print(newptr)

        print(trav)

        return [newptr, sub]

    else:

        return



def additem(newlist, out):

    array = out[0]

    subscript = out[1]

    newstr = array + " = " + array + " + " + subscript

    newlist.append(newstr)

    return newlist



def modifyArray(lines):

    newlist = []

    for i in range(len(lines)):

        lines[i] = lines[i].strip("\n")

        if(len(lines[i].split()) == 3):

            lhs = lines[i].split()[0]

            rhs = lines[i].split()[2]

            out1 = checkArray(lhs, lines, i)

            out2 = checkArray(rhs, lines, i)

            if(out1 != None and out2!=None):

                newlist = additem(newlist, out1)

                newlist = additem(newlist, out2)

                array1 = out1[0]

                array2 = out2[0]

                newline = array1 + " = " + array2

                print(newline)

                newlist.append(newline)

            elif(out1 != None):

                array = out1[0]

                newlist = additem(newlist, out1)

                newline = array + " = " + rhs

                print(newline)

                newlist.append(newline)

            elif(out2 != None):

                array = out2[0]

                newlist = additem(newlist, out2)

                newline = lhs + " = " + array

                print(newline)

                newlist.append(newline)

            elif(out1 == None and out2 == None):

                newlist.append(lines[i])

        elif(len(lines[i].split()) == 5):

            lhs = lines[i].split()[0]

            arg1 = lines[i].split()[2]

            arg2 = lines[i].split()[4]

            out1 = checkArray(lhs, lines, i)

            out2 = checkArray(arg1, lines,i)

            out3 = checkArray(arg2, lines, i)

            if(out1 !=None and out2!=None and out3!=None):

                newlist = additem(newlist, out1)

                newlist = additem(newlist, out2)

                newlist = additem(newlist, out3)

                array1 = out1[0]

                array2 = out2[0]

                array3 = out3[0]

                newline = array1 + " = " + array2 + " " + lines[i].split()[3] + " " + array3

                newlist.append(newline)

            elif(out1 != None and out2 != None):

                newlist = additem(newlist, out1)

                newlist = additem(newlist, out2)

                array1 = out1[0]

                array2 = out2[0]

                newline = array1 + " = " + array2 + " " + lines[i].split()[3] + " " + arg2

                newlist.append(newline)

            elif(out2 != None and out3 != None):

                newlist = additem(newlist, out2)

                newlist = additem(newlist, out3)

                array1 = out2[0]

                array2 = out3[0]

                newline = lhs + " = " + array1 + " " + lines[i].split()[3] + " " + array2

                newlist.append(newline)

            elif(out1 != None and out3 != None):

                newlist = additem(newlist, out1)

                newlist = additem(newlist, out3)

                array1 = out1[0]

                array2 = out3[0]

                newline = array1 + " = " + arg1 + " " + lines[i].split()[3] + " " + array2

                newlist.append(newline)

            elif(out1 != None):

                newlist = additem(newlist, out1)

                array = out1[0]

                newline = array + " = " + arg1 + " " + lines[i].split()[3] + " " + arg2

                newlist.append(newline)

            elif(out2 != None):

                newlist = additem(newlist, out2)

                array = out2[0]

                newline = lhs + " = " + array + " " + lines[i].split()[3] + " " + arg2

                newlist.append(newline)

            elif(out3 != None):

                newlist = additem(newlist, out3)

                array = out3[0]

                newline = lhs + " = " + arg1 + " " + lines[i].split()[3] + " " + array

                print(newline)

                newlist.append(newline)

            else:

                newlist.append(lines[i])

        elif(len(lines[i].split())== 4):

            label = lines[i].split()[3]

            

            if(lines[i].split()[0] == "ARR"):

                newlist.append(lines[i])

                continue

            condition = lines[i].split()[1]

            tempval = 0

            conds = ["=", "!", ">", "<"]

            lhs = ""

            rhs = ""

            condit = ""

            while(tempval<len(condition) and condition[tempval] not in conds):

                lhs+=condition[tempval]

                tempval+=1

            condit+=condition[tempval]

            tempval+=1

            if(tempval <len(condition) and condition[tempval] in conds):

                condit+=condition[tempval]

                tempval+=1

            while(tempval < len(condition)):

                rhs+=condition[tempval]

                tempval+=1

            if('[' in lhs and '[' in rhs):

                out1 = checkArray(lhs, lines, i)

                out2 = checkArray(rhs, lines,i)

                newlist = additem(newlist, out1)

                newlist = additem(newlist, out2)

                newline = "if" + " " + out1[0]+condit+out2[0]+ " " + "goto" + " " + label

                newlist.append(newline)

                print(newline)

            elif('[' in lhs):

                out2 = checkArray(lhs, lines,i)

                newlist = additem(newlist, out2)

                newline = "if" + " " + out2[0]+condit+rhs+ " " + "goto" + " " + label

                newlist.append(newline)

                print(newline)

            elif('[' in rhs):

                out2 = checkArray(rhs, lines,i)

                newlist = additem(newlist, out2)

                newline = "if" + " " + lhs+condit+out2[0]+ " " + "goto" + " " + label

                newlist.append(newline)

                print(newline)

            else:

                newlist.append(lines[i])

            

        else:

            newlist.append(lines[i])

                

    return newlist   
    
fin = open("tac.txt", "r")
fout = open("Optim_ICG.txt", "w")
lines = fin.readlines()
print()
print()
#lines = modifyArray(lines)
print("Loop Invariant Code Motion :- \n")
print()
lines, loopblock = loopMotion(lines)
for i in lines:
    print(i)
#print(loopblock)

               


