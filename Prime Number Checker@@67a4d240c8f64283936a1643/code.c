int isPrime(){
int num;
scanf("%d",&num);
if(num==2 || num==3 || num==5 || num==7){
    printf("1");
}
else if(num%2==0 || num%3==0 || num%5==0 || num%7==0){
    printf("0");
}
else{
    printf("1");
}
return 0;
}

