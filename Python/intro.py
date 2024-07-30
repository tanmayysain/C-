import pandas as pd
from mlxtend.preprocessing import TransactionEncoder 
from mlxtend.frequent_patterns import fpgrowth, apriori

dataset = [['milk','onion','nutmeg',
            'kidney beans','eggs','yogurt'],
            ['dill','onion','nutmeg','kidney beans','eggs','yogurt'],
            ['milk','apples','kidney beans','eggs'],
            ['milk','unicorn','corn','kidney beans','yogurt'],
            ['corn','onion','onion','kidney beans','ice cream','eggs']]

te=TransactionEncoder()
te_ary=te.fit(dataset).transform(dataset)
df=pd.DataFrame(te_ary,columns=te.columns_)
print(df)
rules=fpgrowth(df,min_support=0.6)
print(rules)
ap=apriori(df, min_support=0.6)
print(ap)
ruleswithnames=fpgrowth(df,min_support=0.6,use_colnames=True)
print(ruleswithnames)

frequent_itemset = apriori(df,min_support=0.6,use_colnames=True)
frequent_itemset['length']=frequent_itemset['itemsets'].apply(lambda x:len(x))
print(frequent_itemset)

print(frequent_itemset[(frequent_itemset['length']==2) &
                 (frequent_itemset['support']>=0.8)])
print(frequent_itemset[ frequent_itemset['itemsets'] == {'onion', 'eggs'} ])

                                             

