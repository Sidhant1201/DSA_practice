import datetime
import pytz


dt = datetime.datetime(2016, 5, 29, 12, 30, 45, tzinfo=pytz.UTC)
print(dt)

dt_utc_now = datetime.datetime.now(tz = pytz.UTC)
print(dt_utc_now)

dt_here = dt_utc_now.astimezone(pytz.timezone('Indian/Maldives'))
print(dt_here)
# print(pytz.all_timezones)