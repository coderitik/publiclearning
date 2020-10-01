#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long cardno;

    do
    {
        cardno = get_long_long("Number:\n");
    }
    while (cardno <= 0);

    // Count cc length

    int count = 0;
    long cc = cardno;
    while (cc > 1)
    {
        cc = cc / 10;
        count++;
    }

    // cheaks for the first one and first two number
    int sum;
    long devideone;
    long devidetwo;
    devideone = pow(10, count);
    int firstno = cardno / (devideone/10) ;
    int firsttono = cardno / (devideone/100) ;

    // cheaks for validity of number
    
    if(count == 16)
    {
        if(firsttono == 51 ||firsttono == 52 ||firsttono == 52 ||firsttono == 54 ||firsttono == 55||firsttono == 22)
        {
        
        long one =   ((cardno % 10)) / 1;
        
        long two =   ((cardno % 100) - (1 * one)) / 10;
        
        long three = ((cardno % 1000) - (10 * two) - (1 * one)) / 100;
        
        long four =  ((cardno % 10000) -(100 * three)- (10 * two) - (1 * one)) /1000; 
        
        long five =  ((cardno % 100000) - (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000;
        
        long six =   ((cardno % 1000000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000;
        
        long seven = ((cardno % 10000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000;
        
        long eight = ((cardno % 100000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000;
        
        long nine =  ((cardno % 1000000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000;
        
        long ten =   ((cardno % 10000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000;
        
        long ele =   ((cardno % 100000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000;
        
        long twe =   ((cardno % 1000000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000;
        
        long thir =  ((cardno % 10000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000;
        
        long fourt = ((cardno % 100000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000000;
        
        long fif =   ((cardno % 1000000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000000;
        
        long sixt =   ((cardno % 10000000000000000)-(fif * 100000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000000;
        
        //finding the sum

        int nor = (one + three + five + seven + nine + ele + thir + fif);
        
        int two2;
        int four2;
        int six2;
        int eight2;
        int ten2;
        int twe2;
        int fourt2;
        int sixt2;
        
        two2 = two*2;
            
            if (two2 > 9)
            {
                int i1 = two2%10;
                int i2;
                i2 = (two2 - i1)/10;
                
                two2 = i1 +i2;
            }
            else
            {
                
            }
        
        four2 = four*2;
            
            if (four2 > 9)
            {
                int i1 = four2%10;
                int i2;
                i2 = (four2 - i1)/10;
                
                four2 = i1 +i2;
            }
            else
            {
                
            }
            
        six2 = six*2;
            
            if (six2 > 9)
            {
                int i1 = six2%10;
                int i2;
                i2 = (six2 - i1)/10;
                
                six2 = i1 +i2;
            }
            else
            {
                
            }
            
            
            
        eight2 = eight*2;
            
            if (eight2 > 9)
            {
                int i1 = eight2%10;
                int i2;
                i2 = (eight2 - i1)/10;
                
                eight2 = i1 +i2;
            }
            else
            {
                
            }
            
        ten2 = ten*2;
            
            if (ten2 > 9)
            {
                int i1 = ten2%10;
                int i2;
                i2 = (ten2 - i1)/10;
                
                ten2 = i1 +i2;
            }
            else
            {
                
            }
        twe2 = twe*2;
            
            if (twe2 > 9)
            {
                int i1 = twe2%10;
                int i2;
                i2 = (twe2 - i1)/10;
                
                twe2 = i1 +i2;
            }
            else
            {
                
            }
            
        fourt2 = fourt*2;
            
            if (fourt2 > 9)
            {
                int i1 = fourt2%10;
                int i2;
                i2 = (fourt2 - i1)/10;
                
                fourt2 = i1 +i2;
            }
            else
            {
                
            }
            
        sixt2 = sixt*2;
            
            if (sixt2 > 9)
            {
                int i1 = sixt2%10;
                int i2;
                i2 = (sixt2 - i1)/10;
                
                sixt2 = i1 +i2;
            }
            else
            {
                
            }
            
            
        int mul = (two2 + four2 + six2 + eight2 + ten2 + twe2 + fourt2 + sixt2 );
        
        sum = mul + nor ;
        
        int cheak = sum % 10;
           
            if(cheak==0)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (firstno == 4)
        {   

            long one =   ((cardno % 10)) / 1;
        
        long two =   ((cardno % 100) - (1 * one)) / 10;
        
        long three = ((cardno % 1000) - (10 * two) - (1 * one)) / 100;
        
        long four =  ((cardno % 10000) -(100 * three)- (10 * two) - (1 * one)) /1000; 
        
        long five =  ((cardno % 100000) - (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000;
        
        long six =   ((cardno % 1000000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000;
        
        long seven = ((cardno % 10000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000;
        
        long eight = ((cardno % 100000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000;
        
        long nine =  ((cardno % 1000000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000;
        
        long ten =   ((cardno % 10000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000;
        
        long ele =   ((cardno % 100000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000;
        
        long twe =   ((cardno % 1000000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000;
        
        long thir =  ((cardno % 10000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000;
        
        long fourt = ((cardno % 100000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000000;
        
        long fif =   ((cardno % 1000000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000000;
        
        long sixt =   ((cardno % 10000000000000000)-(fif * 100000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000000;
        
        //finding the sum

        int nor = (one + three + five + seven + nine + ele + thir + fif);
        
        int two2;
        int four2;
        int six2;
        int eight2;
        int ten2;
        int twe2;
        int fourt2;
        int sixt2;
        
        two2 = two*2;
            
            if (two2 > 9)
            {
                int i1 = two2%10;
                int i2;
                i2 = (two2 - i1)/10;
                
                two2 = i1 +i2;
            }
            else
            {
                
            }
        
        four2 = four*2;
            
            if (four2 > 9)
            {
                int i1 = four2%10;
                int i2;
                i2 = (four2 - i1)/10;
                
                four2 = i1 +i2;
            }
            else
            {
                
            }
            
        six2 = six*2;
            
            if (six2 > 9)
            {
                int i1 = six2%10;
                int i2;
                i2 = (six2 - i1)/10;
                
                six2 = i1 +i2;
            }
            else
            {
                
            }
            
            
            
        eight2 = eight*2;
            
            if (eight2 > 9)
            {
                int i1 = eight2%10;
                int i2;
                i2 = (eight2 - i1)/10;
                
                eight2 = i1 +i2;
            }
            else
            {
                
            }
            
        ten2 = ten*2;
            
            if (ten2 > 9)
            {
                int i1 = ten2%10;
                int i2;
                i2 = (ten2 - i1)/10;
                
                ten2 = i1 +i2;
            }
            else
            {
                
            }
        twe2 = twe*2;
            
            if (twe2 > 9)
            {
                int i1 = twe2%10;
                int i2;
                i2 = (twe2 - i1)/10;
                
                twe2 = i1 +i2;
            }
            else
            {
                
            }
            
        fourt2 = fourt*2;
            
            if (fourt2 > 9)
            {
                int i1 = fourt2%10;
                int i2;
                i2 = (fourt2 - i1)/10;
                
                fourt2 = i1 +i2;
            }
            else
            {
                
            }
            
        sixt2 = sixt*2;
            
            if (sixt2 > 9)
            {
                int i1 = sixt2%10;
                int i2;
                i2 = (sixt2 - i1)/10;
                
                sixt2 = i1 +i2;
            }
            else
            {
                
            }
            
            
        int mul = (two2 + four2 + six2 + eight2 + ten2 + twe2 + fourt2 + sixt2 );
        
        sum = mul + nor ;
        
        int cheak = sum % 10;

            if(cheak==0)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else if(count == 15)
    {
        if (firsttono == 34 ||firsttono == 37)
        {   

        long one =   ((cardno % 10)) / 1;
        
        long two =   ((cardno % 100) - (1 * one)) / 10;
        
        long three = ((cardno % 1000) - (10 * two) - (1 * one)) / 100;
        
        long four =  ((cardno % 10000) -(100 * three)- (10 * two) - (1 * one)) /1000; 
        
        long five =  ((cardno % 100000) - (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000;
        
        long six =   ((cardno % 1000000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000;
        
        long seven = ((cardno % 10000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000;
        
        long eight = ((cardno % 100000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000;
        
        long nine =  ((cardno % 1000000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000;
        
        long ten =   ((cardno % 10000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000;
        
        long ele =   ((cardno % 100000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000;
        
        long twe =   ((cardno % 1000000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000;
        
        long thir =  ((cardno % 10000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000;
        
        long fourt = ((cardno % 100000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000000;
        
        long fif =   ((cardno % 1000000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000000;
        
        //finding the sum
        
        int nor = (one + three + five + seven + nine + ele + thir + fif);
        
        int two2;
        int four2;
        int six2;
        int eight2;
        int ten2;
        int twe2;
        int fourt2;
        
        two2 = two*2;
            
            if (two2 > 9)
            {
                int i1 = two2%10;
                int i2;
                i2 = (two2 - i1)/10;
                
                two2 = i1 +i2;
            }
            else
            {
                
            }
        
        four2 = four*2;
            
            if (four2 > 9)
            {
                int i1 = four2%10;
                int i2;
                i2 = (four2 - i1)/10;
                
                four2 = i1 +i2;
            }
            else
            {
                
            }
            
        six2 = six*2;
            
            if (six2 > 9)
            {
                int i1 = six2%10;
                int i2;
                i2 = (six2 - i1)/10;
                
                six2 = i1 +i2;
            }
            else
            {
                
            }
            
            
            
        eight2 = eight*2;
            
            if (eight2 > 9)
            {
                int i1 = eight2%10;
                int i2;
                i2 = (eight2 - i1)/10;
                
                eight2 = i1 +i2;
            }
            else
            {
                
            }
            
        ten2 = ten*2;
            
            if (ten2 > 9)
            {
                int i1 = ten2%10;
                int i2;
                i2 = (ten2 - i1)/10;
                
                ten2 = i1 +i2;
            }
            else
            {
                
            }
        twe2 = twe*2;
            
            if (twe2 > 9)
            {
                int i1 = twe2%10;
                int i2;
                i2 = (twe2 - i1)/10;
                
                twe2 = i1 +i2;
            }
            else
            {
                
            }
            
        fourt2 = fourt*2;
            
            if (fourt2 > 9)
            {
                int i1 = fourt2%10;
                int i2;
                i2 = (fourt2 - i1)/10;
                
                fourt2 = i1 +i2;
            }
            else
            {
                
            }
            
        
            
            
        int mul = (two2 + four2 + six2 + eight2 + ten2 + twe2 + fourt2 );
        
        sum = mul + nor ;
        
        int cheak = sum % 10;



            if(cheak==0)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
        
    }
    else if (count == 13)
    {
        if (firstno == 4)
        {   

        long one =   ((cardno % 10)) / 1;
        
        long two =   ((cardno % 100) - (1 * one)) / 10;
        
        long three = ((cardno % 1000) - (10 * two) - (1 * one)) / 100;
        
        long four =  ((cardno % 10000) -(100 * three)- (10 * two) - (1 * one)) /1000; 
        
        long five =  ((cardno % 100000) - (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000;
        
        long six =   ((cardno % 1000000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000;
        
        long seven = ((cardno % 10000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000;
        
        long eight = ((cardno % 100000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000;
        
        long nine =  ((cardno % 1000000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000;
        
        long ten =   ((cardno % 10000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000;
        
        long ele =   ((cardno % 100000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000;
        
        long twe =   ((cardno % 1000000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000;
        
        long thir =  ((cardno % 10000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /1000000000000;
        
        long fourt = ((cardno % 100000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /10000000000000;
        
        long fif =   ((cardno % 1000000000000000)-(fourt * 10000000000000)-(thir * 1000000000000)-(twe * 100000000000)-(ele * 10000000000)-(ten * 1000000000)-(nine * 100000000)-(eight * 10000000)-(seven * 1000000)-(six * 100000) -(10000 * five)- (1000 * four)-(100 * three) - (10 * two) - (1 * one)) /100000000000000;
        
        //finding the sum
        
        int nor = (one + three + five + seven + nine + ele + thir + fif);
        
        int two2;
        int four2;
        int six2;
        int eight2;
        int ten2;
        int twe2;
        int fourt2;
        
        two2 = two*2;
            
            if (two2 > 9)
            {
                int i1 = two2%10;
                int i2;
                i2 = (two2 - i1)/10;
                
                two2 = i1 +i2;
            }
            else
            {
                
            }
        
        four2 = four*2;
            
            if (four2 > 9)
            {
                int i1 = four2%10;
                int i2;
                i2 = (four2 - i1)/10;
                
                four2 = i1 +i2;
            }
            else
            {
                
            }
            
        six2 = six*2;
            
            if (six2 > 9)
            {
                int i1 = six2%10;
                int i2;
                i2 = (six2 - i1)/10;
                
                six2 = i1 +i2;
            }
            else
            {
                
            }
            
            
            
        eight2 = eight*2;
            
            if (eight2 > 9)
            {
                int i1 = eight2%10;
                int i2;
                i2 = (eight2 - i1)/10;
                
                eight2 = i1 +i2;
            }
            else
            {
                
            }
            
        ten2 = ten*2;
            
            if (ten2 > 9)
            {
                int i1 = ten2%10;
                int i2;
                i2 = (ten2 - i1)/10;
                
                ten2 = i1 +i2;
            }
            else
            {
                
            }
        twe2 = twe*2;
            
            if (twe2 > 9)
            {
                int i1 = twe2%10;
                int i2;
                i2 = (twe2 - i1)/10;
                
                twe2 = i1 +i2;
            }
            else
            {
                
            }
            
        fourt2 = fourt*2;
            
            if (fourt2 > 9)
            {
                int i1 = fourt2%10;
                int i2;
                i2 = (fourt2 - i1)/10;
                
                fourt2 = i1 +i2;
            }
            else
            {
                
            }
            
        
            
            
        int mul = (two2 + four2 + six2 + eight2 + ten2 + twe2 + fourt2 );
        
        sum = mul + nor ;
        
        int cheak = sum % 10;


            if(cheak==0)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
        
    }
    else
    {
        printf("INVALID\n");
    }
    

}
