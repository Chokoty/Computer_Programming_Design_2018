int main()
{
	float a, b, c;
	float root1=0, root2=0;
	scanf("%f %f %f", &a, &b, &c);
	int D = b*b - 4 * a*c;
	if (a != 0)
	{
		if (D >= 0)
		{
			root1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
			root2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
			printf("root1 = %f, root2 = %f\n", root1, root2);
		}
		else
			printf("����� ����\n");
	}
	else
		printf("2�� �������� �ƴ�\n");
	return 0;
}