stack=[]
#push
stack.append('A')
stack.append('B')
stack.append('C')
print ("stack: ", stack)

#pop
element=stack.pop()
print("pop:",element)

#peek
topElement=stack[-1]
print("peek:",topElement)

#isempty
isempty=not bool(stack)
print("is empty:",isempty)

#size
print("size: ",len(stack))

