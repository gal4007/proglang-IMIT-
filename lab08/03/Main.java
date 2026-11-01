public class Main{
	public static void main(String[] Args){
		int[][] array = {
    			{1, 2, 3},
    			{4, 0, 6},
   			 {7, 8, 9}
		}; 
		
		boolean flag = true;
		for(int i = 0; i < array.length && flag; i++){
			for(int j =0; j < array[i].length; j++){
				if(array[i][j] == 0){
					System.out.println(i + " " + j);
					flag = false;
				}
			}	
		}
	}
}