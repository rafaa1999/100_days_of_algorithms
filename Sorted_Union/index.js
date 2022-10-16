function uniteUnique(arr) {
    let item = Object.values(arguments);
    let newarr = [];
    for(let i=0;i<item.length;i++){
      for(let j=0;j<item[i].length;j++){
          if(newarr.indexOf(item[i][j]) == -1){
              newarr.push(item[i][j])
          }
      }
    }
    console.log(newarr.sort())
    
  }
  
  console.log(uniteUnique([1, 2, 3], [5, 2, 1, 4], [2, 1], [6, 7, 8]));