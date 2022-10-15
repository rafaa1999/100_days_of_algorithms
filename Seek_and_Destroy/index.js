function destroyer(arr,...arg) {
    let newarr=[];
    for (let i=0;i<arr.length;i++){
      if(arg.indexOf(arr[i]) == -1){
        newarr.push(arr[i])
      }
    }
    console.log(newarr)
  
  }
  
  console.log(destroyer([1, 2, 3, 5, 1, 2, 3], 2, 3));