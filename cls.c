int Restar  (int a, int b )
{	int c = a-b;
	return c;
}


int sumarNumero (int a,int b)
{
	return a+b;
}

int multiplicar (int a, int b)
{
	return a*b;
}

// realizar una  gran mejora en la funcion de divicion
int funcionDividir ( int a , int b )
{
	return a/b;
}


double funDivReal ( int a , int b )
{
	double c = a / (double)b;
	return c;
}

double funcionModulo ( int a, int b)
{

	double  a%b;

}

int main(){

	char opcion;

	switch (opcion)
	{
		case '+' : funcionSumar(1,1); break;
		case '-' : funcionRestar(1,1); break;
		case '/' : funcioDivicion(2,2);break;
		case '*' : funcionMult(4,4);
		
		
	}	

	int va, int vb, int vc;

	return 0;

}
