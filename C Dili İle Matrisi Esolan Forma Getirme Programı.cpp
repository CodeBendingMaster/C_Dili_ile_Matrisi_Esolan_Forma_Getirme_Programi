//sorularýnýz için yemreaydemir67@gmail.com veya @engineer_of.future(instagram) adresine mesaj gonderebilirsiniz
#include <stdio.h>

void esolanyapma(int f, int g)
{
	f=6;
	g=4;
int i,j=0,k=0,m,n,l,y,u;
float x=0,t=0;
float dizi[6][4] = {1,2,3,4,0,0,0,1,1,4,5,9,19,22,12,8,11,7,9,0,0,2,4,8}; //f satýr, g sütun sayýsý olmak üzere her sayý verilebilir :)

int dizi2[f];


		for(y=0;y<f;y++) //bu for döngüsü ile dizi yazdýrýlýr
	{
		for(j=0;j<g;j++)
		{
		printf("%.2f ",dizi[y][j]);
		}
		printf("\n");
	}
		printf("\n");
for(i=0;i<f;i++)//i sayýsý sütun sayýsýdýr, matrisi satýr satýr inceliyoruz.
{
	
		for(y=0;y<f;y++)
		{
			dizi2[y]=0;
		}	
		

for(m=0;m<f;m++)//dizide pivotlarý uygun þekilde sýralama
{
	t=0;
for(n=0;n<g;n++)
   {

    	if(dizi[m][n]!=0)
	    {
		t=1;
    	}

	    if(dizi[m][n]==0 && t==0)
	   {
	 	dizi2[m]++;
	   } 
	
  }	
}
for(m=0;m<f;m++)
{
	for(n=m+1;n<f;n++)
	{
		if(dizi2[m]> dizi2[n])
		{

	t =dizi2[m];
	dizi2[m] = dizi2[n];
	dizi2[n]=t;
	
	    for(y=0;y<g;y++)
	    {
	    t =dizi[m][y];
	    dizi[m][y] = dizi[n][y];
	    dizi[n][y]=t;
	    } 
		
	    }
	}
}

while(dizi[i][k]==0)
{
	k++;
}					
	

	  

if(dizi[i][k]!=0) //bu if dkomutunda, eðer 3 4 5 gibi bir ifade varsa ve o satýrýn ilk elemanýnýn 1 olmasý gerekiyorsa tüm satýrý 3'e böler
{
	
	t=dizi[i][k];
	for(l=0;l<g;l++)
	{
	 dizi[i][l]=dizi[i][l]/t;
	}
}

  		for(m=i+1;m<f;m++) //bu for döngüsünde pivotlarýn altýnýn 0 yapýlmasý saðlanýr.
  		{
  	
     	x=dizi[m][k]/dizi[i][k]; 

             for(n=0;n<g;n++)
           {
          	dizi[m][n]= -x*dizi[i][n] + dizi[m][n];
           } 
	
        }
     
    k++;//sonraki satýrýn incelenmesi için k, 1 arttýrýlýr

		for(y=0;y<f;y++) //bu for döngüsü ile dizi yazdýrýlýr
	{
		for(j=0;j<g;j++)
		{
		printf("%.2f ",dizi[y][j]);
		}
		printf("\n");
	}
		printf("\n");
  
	
}
	for(i=0;i<f;i++) //bu for döngüsü ile dizi yazdýrýlýr
	{
		for(j=0;j<g;j++)
		{
			printf("%.2f ",dizi[i][j]);
		}
		printf("\n");
	}
	
	

}



	

main()
{ 
    int f,g;//f satýr sayýsý g sütun sayýsý
	esolanyapma(f,g);
}
