int fatorial(int n)
{
	if (n == 0)
		return 1;
	else
		return  n * fatorial(n-1);
}

void Dec_bin(int dec) 
{	
  if (dec == 0) 
  {
    return 0;
  }
  else
  {
  	Dec_bin(dec / 2); 
 	printf("%d", dec % 2); 
  }
  
}

int somatorio(int n)
{
	if (n == 1)
		return 1;
	else
		return  n + somatorio(n-1);
}

int potencia(int base, int exp) 
{
    if (exp == 0) 
        return 1;
     else 
        return base * potencia(base, exp-1);
}

int Multip_Rec(int num1, int num2)
{
	if (num2 == 0) 
        return 0;
     else 
        return num1 + Multip_Rec(num1, num2-1);
}

void naturais_crescente(int num)
{
    if(num == 0)
    {
        printf("%d\n ", num);
	}	
    else
    {
        naturais_crescente(num-1);
        printf("%d ", num);
    }
}

void naturais_decrescente(int num)
{
    if (num == 0) 
    {
    	printf("%d\n ", num);
	}
    else 
    {
    	printf("%d ", num);
    	naturais_decrescente(num-1);
	}
}




