
void transform_std (float * dest, 
		    const float * src, 
		    const float * params, 
		    int n,
		    int np);

void transform_opt (float * restrict dest, 
		    const float * restrict src, 
		    const float * restrict params, 
		    int n,
		    int np);
			
