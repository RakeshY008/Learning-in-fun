a=dict()
while(1):
	b=int(input("enter key"))
	c=input("enter value")
	a[b]=c
	print("do you want to stop#if yea press 1")
	c=int(input("enter"))
	if c == 1:
		break
	else:
		pass
print(a)
