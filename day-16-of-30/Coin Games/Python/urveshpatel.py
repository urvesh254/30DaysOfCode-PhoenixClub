n = int(input())

"""
    ** Explanation ** 

    - After seeing the probelm I find the pattern 
        k(k+1)/2 <= n
            where, k = no. of filled rows
                   n = given input
    
    - After rewriting the above equation 
        k^2 + k - 2*n <= 0

    - For linear equation ax^2 + bx + c = 0 then roots of x is given by 
        x = ( -b ± sqrt(b^2 - 4*a*c)) / 2*a
    
    - Comparing above linear equation with ours.
        so a = 1,b = 1 and c = -2*n
        - We only take the positive roots of k 
        so, k = (-1 + sqrt(1 + 8*n)) / 2

"""

k = int(-1 + (8 * n + 1) ** 0.5) // 2
print(k)
