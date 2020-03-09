
#include <stdio.h>
class Vector3D {
	
	private:
	
		float x,y,z;
	
	public:
	
		Vector3D (float a, float b, float c){
			
			x = a;
			y = b;
			z = c;
			
		}
		

		float DotProduct (const Vector3D v){
			
			return v.x*x + v.y*y +v.z*z;
			
		}
		
		float CrossProduct (const Vector3D v, float output []){

			//Calculate cross product
			output [0] = (y * v.z) - (z *v.y);
			output [1] = (z * v.x) - (x * v.z);
			output [2] = (x * v.y) - (y * v.x);

		}


};
