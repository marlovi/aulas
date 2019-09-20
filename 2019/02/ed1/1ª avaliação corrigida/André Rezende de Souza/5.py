def func(n):
	if n==1:
		return 1;
	else:
		return (n-1)*func(n-1)

a = func(5)
print(a)