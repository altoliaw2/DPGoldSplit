#include <iostream>

void fn_CalMaxPrice(int* ip_Price, int i_BI);

int main(){

    int i_GU = 0;
    std::cin>> i_GU;
    int i_Len = i_GU;
    if(i_GU < 8){
        i_Len = 8;
    }

    int ia_Price[(i_Len + 1)] ={0, 2, 5, 9,
                            10, 15, 16, 19, 26};
    fn_CalMaxPrice(ia_Price, i_GU);

    std::cout<< ia_Price[i_GU];

	return 0;
}

void fn_CalMaxPrice(int* ip_Price, int i_BI){
    for(int i_Ct=2; i_Ct<= i_BI; i_Ct++){
        int i_TmpMax = -1;
        for(int i_Ct2= i_Ct; i_Ct2>= (i_Ct/2); i_Ct2--){
            int i_Tmp= ip_Price[i_Ct2] +
                            ip_Price[i_Ct-i_Ct2];
            if(i_Tmp> i_TmpMax){
                i_TmpMax = i_Tmp;
            }
        }
        ip_Price[i_Ct] = i_TmpMax;
    }
}
