import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/choi/Fitomi_Assist_AI_Cobot/install/fitomi'
