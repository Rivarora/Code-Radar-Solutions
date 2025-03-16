void caserCipher(char message[],int shift,char encrypted[]){
    int i=0;
    char ch=message[i];
    while(message[i]!="\0"){
        if(ch>='a' && ch<='z'){
            encrypted[i]='a'+((ch-'a')+shift)%26;
        }
        else if(ch>='A' && ch<='Z'){
            encrypted[i]='A'+((ch-'A')+shift)%26;
        }
        else{
            encrypted[i]=ch;
        }
        i++;
    }
    encrypted["\0"];
}
