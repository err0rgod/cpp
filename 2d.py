num_pad = ((1,2,3),(4,5,6),(7,8,9),('*',0,'#'))

for collect in num_pad:
    for each in collect:
        print(each, end=" ")
    print()