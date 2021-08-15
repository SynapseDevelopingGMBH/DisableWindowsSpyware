import os

os.system(' cmd /c "auditpol /set /subcategory:"Filtering Platform Connection" /success:disable /failure:enable"')


