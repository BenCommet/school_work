
public class inClassOne{

public static void main(String[] args){
	int[] parameterArray = new int[10];
	for(int i = 0; i < 10; i++){
		parameterArray[i] = i;
	}
	inClass(parameterArray);
}

public static void inClass(int[] nums){
	for(int i = 0; i < nums.length; i++){
		if(nums[i] % 2 == 0){
			System.out.println("true");
		}
		else
			System.out.println("false");
}
}
}
