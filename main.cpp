//
//  main.m
//  Cesar
//
//  Created by Murilo Erhardt on 08/08/16.
//  Copyright © 2016 Murilo Erhardt. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    char frase[] = "n ngvivqnqr qr ubwr fren pbafgehve hz cebtenzn an yvathntrz qr fhn cersrerapvn dhr rkrphgr n pbqvsvpnpnb r n qrpbqvsvpnpnb qr nedhvibf hfnaqb onfr. frh cebtenzn qrir fre pncnm qr yre r pbqvsvpne nedhvibf grkgb rz dhnydhre sbezngnpnb, orz pbzb nedhvibf ovanevbf. b erfhygnqb qrir fre hz nedhvib pbqvsvpnqb pbz b zrfzb abzr qb bevtvany.o vaqvpnaqb hz nedhvib onfr. cbfgne b erfhygnqb svany an fhn cnfgn crffbny ab rherxn";
    int shift = 0;

    
    for(shift = 0; shift < 26; shift++){
        for(int i=0; i <= strlen(frase) ; i ++){    //Percorre toda string
            char letra = frase[i];
            if((letra < 97) || (letra > 122)) {
                //Caso o decimal de a for estiver fora do range ele não é um letra de a-z
                //portanto mantem seu estado original.
            }
            else{
                int ascii = (int) frase[i];
                //printf("%d", ascii);
                
                if((ascii + shift) > 122){
                    letra = letra - (26 - shift);
                }
                else{
                    letra = letra + shift;
                }
                
            }
            printf("%c", letra);
        }
        printf("       (Tentativa %d) \n \n", shift);
    }

    return 0;
}
