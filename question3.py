import random
list=['Snake','Water','Gun']
a = print('a2 1 press * to continue : ' , end=" " )
a = input()
if a=='*':
    a1=print(random.choice(list))
else:
    print('Invalid')
b = print('a2 2 press * to continue : ', end=" " )
b = input()
if b=='*':
    a2=print(random.choice(list))
else:
    print('Invalid')
# if a1=='Snake':
#     if a2=='Water':
#         print('a2 1 won.')
#     else:
#         print('a2 2 won.')
# elif a1=='Water':
#     if a2=='Snake':
#         print('a2 2 won.')
#     else:
#         print('a2 2 won.')
# elif a1=='Gun':
#     if a2=='Snake':
#         print('a2 1 won.')
#     else:
#         print('a2 2 won.')

if a1 == 's':
    if a2 == 'w':
        a1_win += 1
    elif a2 == 'g':
        a2_win += 1
 
elif a1 == 'w':
    if a2 == 'g':
         a1_win += 1
    elif a2 == 's':
        a2_win += 1
 
elif a1 == 'g':
    if a2 == 's':
        a1_win += 1
    elif a2 == 'w':
        a2_win += 1
else:
    print("None of the Options Matches OPPs Better luck Next time")