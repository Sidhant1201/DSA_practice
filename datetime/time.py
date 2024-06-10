import datetime

t = datetime.time(9, 45, 30, 1000)
print(t)

#none of the following are time zone aware
dt_today = datetime.datetime.today() 
dt_now = datetime.datetime.now()
dt_utc_now= datetime.datetime.utcnow()

print(dt_today)
print(dt_now)
print(dt_utc_now)

