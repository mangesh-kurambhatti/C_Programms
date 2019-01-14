int i=100;
static int j=200;

static int multiply(int a)
{
	return a*j;
}
int multiply2(int b)
{
	return b*i;

}
int multiply1(int a)
{
	return multiply(a);
}
