bool is_ascending(int array[], int n){
	if( n <= 0){
		return false;
	}
	
	for(int i = 0; i < n -1; ++i){
		if( array[i+1] < array[i]){
			return false;
		}
	}
	
	return true;
}