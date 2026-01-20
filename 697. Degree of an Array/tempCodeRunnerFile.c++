int start = 0 ; 
        int end = nums.size()-1 ; 
        while (true)
        {
            if (nums[start] == i)
            {
                start = i ; 
                break ; 
            }
            start++ ; 
        }

        while (true)
        {
            if (nums[end] == i)
            {
                end = i ; 
                break ; 
            }
            end-- ; 
        }

        int val = (end - start)+ 1 ; 
        int min = val ;
        
        if (val < min)
        {
            min = val ;
        }
        
        cout << end ; 