/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>

int main() 
{

//กำหนดค่าตัวเเปร

float day , hour , min , sec ;

//รับค่าจำนวนวัน

printf ( "Input Days : " ) ;
scanf ( "%f" , &day ) ;

hour = 24 ;
min = 60 ;

//คำนวนเเปลงหน่วย

sec = ( day * hour * min ) * 60 ;


//เเสดงค่าการเเปลงหน่วย

printf ( "%.0f days = %.0f seconds", day , sec ) ;

return 0 ;



}