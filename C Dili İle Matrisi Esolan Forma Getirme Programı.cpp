//sorular�n�z i�in yemreaydemir67@gmail.com veya @engineer_of.future(instagram) adresine mesaj gonderebilirsiniz
#include <stdio.h>

void esolanyapma(int f, int g)
{
	f=6;
	g=4;
int i,j=0,k=0,m,n,l,y,u;
float x=0,t=0;
float dizi[6][4] = {1,2,3,4,0,0,0,1,1,4,5,9,19,22,12,8,11,7,9,0,0,2,4,8}; //f sat�r, g s�tun say�s� olmak �zere her say� verilebilir :)

int dizi2[f];


		for(y=0;y<f;y++) //bu for d�ng�s� ile dizi yazd�r�l�r
	{
		for(j=0;j<g;j++)
		{
		printf("%.2f ",dizi[y][j]);
		}
		printf("\n");
	}
		printf("\n");
for(i=0;i<f;i++)//i say�s� s�tun say�s�d�r, matrisi sat�r sat�r inceliyoruz.
{
	
		for(y=0;y<f;y++)
		{
			dizi2[y]=0;
		}	
		

for(m=0;m<f;m++)//dizide pivotlar� uygun �ekilde s�ralama
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
	

	  

if(dizi[i][k]!=0) //bu if dkomutunda, e�er 3 4 5 gibi bir ifade varsa ve o sat�r�n ilk eleman�n�n 1 olmas� gerekiyorsa t�m sat�r� 3'e b�ler
{
	
	t=dizi[i][k];
	for(l=0;l<g;l++)
	{
	 dizi[i][l]=dizi[i][l]/t;
	}
}

  		for(m=i+1;m<f;m++) //bu for d�ng�s�nde pivotlar�n alt�n�n 0 yap�lmas� sa�lan�r.
  		{
  	
     	x=dizi[m][k]/dizi[i][k]; 

             for(n=0;n<g;n++)
           {
          	dizi[m][n]= -x*dizi[i][n] + dizi[m][n];
           } 
	
        }
     
    k++;//sonraki sat�r�n incelenmesi i�in k, 1 artt�r�l�r

		for(y=0;y<f;y++) //bu for d�ng�s� ile dizi yazd�r�l�r
	{
		for(j=0;j<g;j++)
		{
		printf("%.2f ",dizi[y][j]);
		}
		printf("\n");
	}
		printf("\n");
  
	
}
	for(i=0;i<f;i++) //bu for d�ng�s� ile dizi yazd�r�l�r
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
    int f,g;//f sat�r say�s� g s�tun say�s�
	esolanyapma(f,g);
}
