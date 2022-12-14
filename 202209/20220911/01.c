#include <stdio.h>

/*青蛙跳台阶问题 （一只青蛙一次可以跳上 1 级台阶，也可以跳上 2 级。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。）*/

//递归调用
int jump1(int n)
{
	if (n < 4)
		return n;
	else
		return jump1(n - 1) + jump1(n - 2);
}

//迭代
int jump2(int n)
{
	int a = 2;
	int b = 3;
	int c = n;
	while (n>3)
	{
		c = a + b;
		a = b;
		b = c;	
		n--;
	}
	return c;
}


/*设置一个数组，用于存放第一次计算某一个n的jump(n)。
当每一次要计算一个jump(n)的时候，就先查看数组中以n为下标的地方是否有值，
有的话就可以不调用jump(n)，而直接从数组中取得结果值，否则再计算jump(n)。*/
long int f[1000] = { 0 };
int jump3(int n)
{
    //当只有一阶台阶的时候，只有一种上台阶的方式。

    //当有2阶台阶的时候，有2种上台阶的方式，一种是一次上一阶，还有一种是一次上2个台阶。

    //现在设有n阶台阶,如果n>2,那种应该有（先跳一阶）+（先跳2阶）的方式

    //如果先跳一阶，那么就有jump(n-1)中方式。如果先跳2阶，那么就有jump(n-2)中方式。

    //因此可以知道共有jump(n-1) + jump(n-2)种方式。
    if (n == 0)
    {
        f[0] = 0;
        return f[0];
    }

    if (n == 1)
    {
        f[1] = 1;
        return f[1];
    }

    if (n == 2)
    {
        f[2] = 2;
        return f[2];
    }
    else
    {
        if (f[n - 1] != 0)
        {
            if (f[n - 2] != 0)
            {
                return (f[n - 1] + f[n - 2]);
            }
            else
            {
                f[n - 2] = jump3(n - 2);
                return (f[n - 1] + f[n - 2]);
            }
        }
        else
        {
            if (f[n - 2] != 0)
            {
                f[n - 1] = jump3(n - 1);
                return (f[n - 1] + f[n - 2]);
            }
            else
            {
                f[n - 1] = jump3(n - 1);
                f[n - 2] = jump3(n - 2);
                return (f[n - 1] + f[n - 2]);
            }
        }
    }
}


//一只青蛙一次可以跳上一级台阶，也可以跳上二级台阶……，也可以跳n级，求该青蛙跳上一个n级的台阶总共需要多少种跳法。

/*解题思路：一只青蛙要想跳到n级台阶，可以从一级，二级……，也就是说可以从任何一级跳到n级
当台阶为1级时，f(1) = 1；
当台阶为2级时，f(2) = 1 + 1 = 2；
当台阶为3级时，f(3) = f(1) + f(2) + 1 = 4；
当台阶为4级时，f(4) = f(1) + f(2) + f(3) + 1 = 8；
当台阶为5级时，f(5) = f(1) + f(2) + f(3) + f(4) + 1 = 16；
所以递推公式我们很容易就能想到 : f(n) = f(n−1) + f(n−2) + …… + f(2) + f(1) + f(0)
最后这个f(0)是可以去掉的，因为0级就相当于没跳，所以f(0) = 0
然后我们把f(0)去掉再转换一下：f(n−1) = f(n−2) + f(n−3) + …… + f(2) + f(1)；
推导过程
我们列两个等式：
①f(n) = f(n−1) + f(n−2) + f(n−3) + … + f(2) + f(1)
②f(n−1) = f(n−2) + f(n−3) + … + f(2) + f(1)
由① - ②得，f(n) = 2f(n−1)
*/

//递归
int jump4(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 2 * jump4(n - 1);
    }
}


int jump5(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return 1 << (n - 1);
    }
}