Eg: Let's try this with our hand 3 + 2 = 5 , the carry will be with in the brackets i.e "()"

3 => 011 
2=>  010
     ____
     1(1)01
Here we will forward the carry at the second bit to get the result.
So which bitwise operator can do this ? A simple observation says that XOR can do that

The carry is generated when both the bits are set, i.e (1,1) will generate carry but (0,1 or 1,0 or 0,0) 
won't generate a carry, so which bitwise operator can do that ? AND gate ofcourse.

now we need to add it to the previous value we generated i.e ( 3 ^ 2), but the carry should be added to the left bit of the one which genereated it.
so we left shift it by one so that it gets added at the right spot.


int getSum(int a, int b) {
        unsigned XOR = a^b;
        unsigned AND = a&b;
        AND = AND<<1;
        return XOR+AND;
    }