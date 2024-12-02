int removeDuplicates(int* nums, int numsSize) {  
    int t,d,k=0;
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]!=999)
        {
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[i]==nums[j])
                {
                d=-999;
                 t=nums[j];
                 nums[j]=d;
                }
            }
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=-999)
        {
            int p=nums[k];
            nums[k]=nums[i];
            nums[i]=p;
            k++;
        }
        }
        return k;
}


    
