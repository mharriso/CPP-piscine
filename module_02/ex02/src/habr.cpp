#define DIGITS 1024 // экспонента
#define EPS 20 // константа устанавливающая границы приближенности вычисления корня

using namespace std;
typedef signed int __int32_t;

class Fixed {
      signed int x;

      Fixed(signed int a){
            x = a;
      }
      public:
            Fixed(){
                  x = 0;
            }
            static Fixed fromInt(signed int val){
                  return Fixed(val*DIGITS);
            }
            static Fixed fromFloat(float val){
                  return Fixed((signed int)(val*DIGITS));
            }
            float fixed2float(){
                  return ((float)x)/DIGITS;
            }
            Fixed sum(Fixed a,Fixed b){
                  return Fixed(a.x+b.x);
            }
            Fixed diff(Fixed a,Fixed b){
                  return Fixed(a.x-b.x);
            }
            Fixed mul(Fixed a,Fixed b){
                  signed int c=a.x*b.x;
                  if(c/b.x != a.x){
                        // Overflow!
                        signed int i1 = a.x/DIGITS;
                        signed int i2 = b.x/DIGITS;
                        signed int f1 = (a.x&(DIGITS-1));
                        signed int f2 = (b.x&(DIGITS-1));
                        return Fixed((i1*i2)*DIGITS+(f1*f2)/DIGITS+i1*f2+i2*f1);
                  }else{
                        return Fixed(c/DIGITS);
                  }
            }
            Fixed div(Fixed a,Fixed b){
                  if(a.x>(1<<21)){
                        // Overflow!
                        signed int i = a.x/DIGITS;
                        signed int f = (a.x&(DIGITS-1));
                        return Fixed(((i*DIGITS)/b.x)*DIGITS+(f*DIGITS)/b.x);
                  }else{
                        return Fixed((a.x*DIGITS)/b.x);
                  }
            }
            Fixed sqrt(Fixed k){
                  Fixed tmp(0);
                  tmp.x = k.x/2;
                  signed int min = 0;
                  signed int max = k.x;
                  Fixed quick(0);
                  do{
                        tmp.x = (min+max)/2;
                        quick = Fixed::mul(tmp,tmp);
                        if(abs(quick.x-k.x)<EPS) return Fixed(tmp);
                        if(quick.x>k.x){
                              max = tmp.x;
                        }else{
                              min = tmp.x;
                        }
                  }while(true);
            }
};
