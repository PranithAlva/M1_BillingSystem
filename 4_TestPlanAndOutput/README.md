# Test Plan #
### High level test plan ###
Test_ID | Description | Ex I/p | Ex O/P | Actual out | Type of test
------- | ----------- | ------ | ------ | ---------- | ------------
H_01    |  Test the discount is 0 if grand total is less than 100 |     0    | 0 | 0 | technical
H_01    |  Test the discount is 0 if grand total is less than 100 |     100.1      | 0 | 0 | technical
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_02    |  Test the discount is 0 if grand total is greater than 100 and less than 500 |     n>=100 && n<500     | 0.1 | 0.1 | technical
H_03    |  Test the discount is 0 if grand total is less than 1000 and greater than 500 |     n>=500 && n<1000       | 0.2 | 0.2 | technical
H_04    |  Test the discount is 0 if grand tota is greater than 1000 and less than 1500 |     n<1500  && n>=1000     | 0.32 | 0.32 | technical
H_05    |  Test the discount is 0 if grand total is greater than 2000 |     n>=200o      | 0.45 | 0.45 | technical
H_06    |  Test gst is added is 100 |     n<100      | 0 | 0 | technical
H_07    |  Test gst added is 100 |     n<100      | 0 | 0 | technical
H_08    |  Test gst added is 100 |     n<100      | 0 | 0 | technical
H_09    |  Test gst added is 20% |     n<100      | 0 | 0 | technical
H_10    |  Test gst added is 20% |     n<100      | 0 | 0 | technical
H_10    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_12    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
H_01    |  Test the discount is 0 if grand total is less than 100 |     n<100      | 0 | 0 | technical
