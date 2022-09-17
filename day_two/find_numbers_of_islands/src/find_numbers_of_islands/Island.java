package find_numbers_of_islands;

public class Island {
	
	public int numIslands(char[][] grid) {
        // the number of island connected 
        // at the beginning
       int count=0 ;
        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j] == '1'){
                    count+=1;
                    // search the whole ones that are
                    // connected using BFS search
                    search(grid,i,j);
                }
            }
        }
        // return count coz we must return integer
        return count;
    }
    
        // search method
        // is a recursion method
     public void search(char[][] grid,int i,int j){
        // boundry check 
        // this is the break point of recursion method
        if( i<0 || i>=grid.length || j<0 || j>=grid[i].length || grid[i][j] == '0' )
            return;

        // we must give the ones that
        // have been searched to zeros to 
        // be able to check all ones in
        // the grid
        grid[i][j] = '0';
        // up
        search(grid,i+1,j);
        // down
        search(grid,i-1,j);
        // left
        search(grid,i,j-1);
        // right 
        search(grid,i,j+1);

    }
}
