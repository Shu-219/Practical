int median_array(int array[], int n){
    
	if((n < 1) && (n % 2 == 0)){
		return 0;
	}
	
	for(int i = n; i > 1; --i){
		int max = array[0];
		int ind = 0;
		
		for(int j = 1; j < i; ++j){
			if(array[j] > max){
				max = array[j];
				ind = j;
			}
		}
		
		int temp;
		temp = array[i-1];
		array[i-1] = array[ind];
		array[ind] = temp;
	}
	
	return array[n/2];
}