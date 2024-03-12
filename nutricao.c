float IMC(float peso, float altura)
{
	return peso / ( altura * altura);
}

void massa_gor()
{
	float peso, altura, imc, mas_gorda;
	char op;
	int idd;

	system("cls");
	menu2();
	scanf(" %c", &op);

	printf("Insira o peso em kg: ");
	scanf("%f", &peso);
	printf("Insira a altura em metros: ");
	scanf("%f", &altura);
	printf("Insira a sua idade: ");
	scanf("%d", &idd);
	imc = IMC(peso, altura);

	if ((toupper(op)) == 'M')
		mas_gorda = (1.20 * imc) + (0.23 * idd) - (10.8 * 1) - 5.4;
	else
		mas_gorda = (1.20 * imc) + (0.23 * idd) - (10.8 * 0) - 5.4;

	printf("A massa gorda � %.2f\n", mas_gorda);
}
