# include <stdio.h>
# include <math.h>
int main()
{
	float tmin,tsec,S,t,v;
	printf ("vvedte vashe vremya v min i sec\n");
	scanf ("%f  %f",&tmin,&tsec);
	printf ("vvedte vashe rasstoyanie v metrax\n");
	scanf ("%f",&S);
	t=(tmin/60.0)+(tsec/3600.0);
	S=S/1000.0;
	v=S/t;
	printf ("v=%f ",v);
	getchar();
	getchar();
return 0;
}