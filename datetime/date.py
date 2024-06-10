import datetime

# naive datetime do not track time zone or daylight savings but aware datetime does. 
d = datetime.date(2016, 7, 16)
print(d)

td = datetime.date.today()
print(td)
print(td.day)
print(td.year)
print(td.isoweekday()) # monday 1 sunday 7
print(td.weekday()) # monday 0 sunday 6

bday = datetime.date(2025, 5, 29)

till_bday = bday- td
print(till_bday.days)
print(till_bday.total_seconds())