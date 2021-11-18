#include "fcpp.hh"
 


bool ungerade(int zahl){

    return (zahl%2 == 0);

}

int quadrat (int x) {
     
    return x*x;

}


int multisignal (int y, int z) {
    std::cout << "Weitere Multiplikation." << std::endl;
    
    return y*z;

}


int powerimp(int q, int n){ //improve with loops   
        

		if(n==0){
			//output für n=0
         
			return 1;
			
			
			}else{
		
		if (n==1){
			
		
			return q;
			
			}else{
		
		
		if(ungerade(n)){
			int temp = powerimp(q, n/2);

            //In der Aufgabe steht zwar, am solle die Fkt quadrat() benutzen, aus der "gegebenen Vorlage" benutzen, fcpp enthölt jedoch keine Fkt quadrat().


			return quadrat(temp);
			}
		else{
        
			return multisignal (powerimp(q, n-1) , q);			
			
		}//end n ungerade
		
		}//end of if !=1
		
			}//end if n!=0
			
		}//end powerimp






int main (){

    std::cout << "n hoch m" << std::endl;
    int n; 
    std::cout << "n: ";
    std::cin >> n;
    int m;
    std::cout << "m: ";
    std::cin >> m;
    if (m<0){
        std::cout << "0" << std::endl;
    }else{
    std::cout << powerimp(n,m) << std::endl;
    }

}

