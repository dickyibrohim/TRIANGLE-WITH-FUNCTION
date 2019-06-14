#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//PROTOTYPE: Mengenalkan Fungsi ke Program Jika beda File
// float triangle (int a, int  t);

//FUNGSI
float triangle (int a, int  t)
{
    /* OR WAY
    float hasil;
    hasil = a*t/2;
    return hasil;
    */
    //Atau langsung ditulis
    return (a*t/2);
}

// MAIN
int main(){
float height, width; //float a; jika menggunakan rumus dibawah;
printf ("Input height= ");
scanf ("%f",&height);
printf ("Input width= ");
scanf ("%f",&width);
// OR AGAR DI PRINT F TIDAK USAH NULIS RUMUS
// a = triangle (height,width);
    printf("Hasil Area = %.2f\n", triangle(height,width));
    return 0;
}








/*
#include <stdio.h>
#include <stdlib.h>

// PROCEDURE DAN FUNGSI ADA DILUAR MAIN

//FUNGSI
int pengurangan (int a, int b)
{
    int hasil;
    hasil =a-b;
    return hasil;
}

// MAIN
int main()
{
    printf("Hasil pengurangan 5 - 2 = %d", pengurangan(5,2));
    return 0;
}

*/
