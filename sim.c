int main()
 {
 int low=0,high=0; //Enter the range low and high
 scanf("%d %d", &low, &high);
 int i, digit, n, sum;
 for(i = low; i<= high ;i++)
 {
	 n = i;
	 sum = n;
	 while(sum > 9)
	 {
		 n = sum;
		 sum = 0;
		 while(n > 0)
		 {
			 digit = n%10;
			 n = n/10;
			 sum = sum + digit;
		 }
	 }
 	if(sum == 1)
	 {
	 printf("%d is a CS101 quiz number ",i);
 	}
 }
 return 0;
 }
