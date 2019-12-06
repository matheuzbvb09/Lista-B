main()
{
    int a, b, c;
    printf("<><><><><><>CLASSIFICANDO TRIANGULOS QUANTO AOS LADOS<><><><><>\n");
    while( 1 > 0 )
    {
        printf("\nEntre com o valor dos lados A, B e C do triangulo:\n");
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);            
       
         if ((a == b)&&(b == c))
         {  
             printf("\nO Triangulo e Equilatero\n  ");
         }
         else if ((a != b)&&(a != c)&&(b != c))
         {
            printf("\nO Triangulo e Escaleno\n  ");
         }
         else 
         {
            printf("\nO Triangulo e Isoceles");
         }
    }
    return (0);
}
