int dataTypes(string type)
{
    // Write your code here
    // int size;
    // if(type=="Float"){
    //     size=sizeof(float);
    // }else if(type=="Integer"){
    //     size=sizeof(int);
    // }else if(type=="Long"){
    //     size=sizeof(long);
    // }else if(type=="Double"){
    //     size=sizeof(double);
    // }else if(type=="Character"){
    //     size=sizeof(char);
    // }else{
    //    return -1
    //    }
    // return size;

    if (type == "Integer" || type == "Float")
    {
        return 4;
    }
    else if (type == "Long" || type == "Double")
    {
        return 8;
    }
    else if (type == "Character")
    {
        return 1;
    }
    else
    {
        return -1;
    }
}