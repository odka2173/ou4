#include <cstdlib>
// Integer class 

class Heltal{
	public:
		Heltal(int);
		int get();
		void set(int);
		int fib();
		int a;
		int b;
	private:
		int val;
		
	};
 
Heltal::Heltal(int n){
	val = n;
	}
 
int Heltal::get(){
	return val;
	}
 
void Heltal::set(int n){
	val = n;
	}

int Heltal::fib(){
    if(val==0)
    {
        return 0;
    }
    else if(val==1)
    {
        return 1;
    }
    else
    {
	a = val;
	val = a-1;
	a = fib();
	b = val;
	val = b-1;
	b = fib();    
        return a + b;
    }
}
	

extern "C"{
	Heltal* Heltal_new(int n) {return new Heltal(n);}
	int Heltal_get(Heltal* heltal) {return heltal->get();}
	void Heltal_set(Heltal* heltal, int n) {heltal->set(n);}
	int Heltal_fib(Heltal* heltal) {return heltal->fib();}
	void Heltal_delete(Heltal* heltal){
		if (heltal){
			delete heltal;
			heltal = nullptr;
			}
		}
	}
