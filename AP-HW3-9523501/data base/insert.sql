insert into "User" values (default, 'a1', '09120000010', 'a1@gmail.com',
 md5('12345'),'sepehr1', 'javan1', '123456798', 'http//s1', now(), now());

insert into "User" values (default, 'a2', '09120000009', 'a2@gmail.com',
 md5('12354'),'sepehr2', 'javan2', '123456798', 'http//s2', now(), now());

insert into "User" values (default, 'a3', '09120000008', 'a3@gmail.com',
 md5('12435'),'sepehr3', 'javan3', '123456798', 'http//s3', now(), now());

insert into "User" values (default, 'a4', '09120000001', 'a4@gmail.com',
 md5('12453'),'sepehr4', 'javan4', '123456798', 'http//s4', now(), now());

insert into "User" values (default, 'a5', '09120000007', 'a5@gmail.com',
 md5('12543'),'sepehr5', 'javan5', '123456798', 'http//a5', now(), now());

insert into "User" values (default, 'b1', '09351000001', 'b1@gmail.com',
 md5('12534'),'sina1', 'asadi1', '123456798', 'http//b1', now(), now());

insert into "User" values (default, 'b2', '09352000002', 'b2@gmail.com',
md5('13245'),'sina2', 'asadi2', '123456798', 'http//b2', now(), now());

insert into "User" values (default, 'b3', '09353000003', 'b3@gmail.com',
 md5('13254'),'sina3', 'asadi3', '123456798', 'http//b3', now(), now());

insert into "User" values (default, 'b4', '09354000004', 'b4@gmail.com',
md5('14325'),'sina4', 'asadi4', '123456798', 'http//b4', now(), now());

insert into "User" values (default, 'b5', '09355000005', 'b5@gmail.com',
md5('14352'),'sina5', 'asadi5', '123456798', 'http//b5', now(), now());

insert into "User" values (default, 'shahin.javanmardi', '09360000001',
 'shahin.javanmardi@gmail.com',md5('14523'),'shahin', 'javanmardi',
  '123456798', 'http//shahinj', now(), now());

insert into "User" values (default, 'abbas007', '09380000001',
 'abbas007@gmail.com', md5('14532'),'abbas', '007',
  '123456798', 'http//abbas', now(), now());



insert into "Channel" values (default, 'aut_ap_2005', 'ch1',
 '', 5, now(), now());

insert into "Channel" values (default, 'aut_ap_2009', 'ch2',
 '', 1, now(), now());

insert into "Channel" values (default, 'aut_ap_2012', 'ch3',
 '', 8, now(), now());

insert into "Channel" values (default, 'aut_ap_2016', 'ch4',
 '', 1, now(), now());

insert into "Channel" values (default, 'aut_ap_2019', 'ch5',
 '', 6, now(), now());


insert into "ChannelMembership" values (9, 3, now());

insert into "ChannelMembership" values (4, 5, now());

insert into "ChannelMembership" values (5, 3, now());

insert into "ChannelMembership" values (1, 5, now());

insert into "ChannelMembership" values (8, 5, now());

insert into "ChannelMembership" values (4, 1, now());

insert into "ChannelMembership" values (6, 5, now());

insert into "ChannelMembership" values (10, 1, now());

insert into "ChannelMembership" values (7, 1, now());

insert into "ChannelMembership" values (1, 1, now());


insert into "BlockUser" values (4, 10, now());

insert into "BlockUser" values (4, 3, now());

insert into "BlockUser" values (4, 5, now() - interval '2 month');


insert into "Message" values (default, 11, 12, 'text', 
'hi!', now(), now());

insert into "Message" values (default, 12, 11, 'text', 
'hi! whats up?', now(), now());

insert into "Message" values (default, 11, 12, 'text', 
'nothing new! just ap homworks', now(), now());

insert into "Message" values (default, 12, 11, 'text', 
'Oh! you sure have it rough!', now(), now());

insert into "Message" values (default, 11, 12, 'text', 
'yeah! its exhausting', now(), now());

insert into "Message" values (default, 11, 12, 'text', 
'anyway! thanks for listening!', now(), now());

insert into "Message" values (default, 12, 11, 'text', 
'dont mention it!', now(), now());


insert into "ChannelMessage" values (default, 3, 'text',
 '1', now(), now());

insert into "ChannelMessage" values (default, 5, 'text',
 '2', now() - interval '2 month', now() - interval '2 month');

insert into "ChannelMessage" values (default, 4, 'text',
 '3', now() - interval '2 month', now() - interval '2 month');

insert into "ChannelMessage" values (default, 1, 'text',
 '4', now(), now());

insert into "ChannelMessage" values (default, 2, 'text',
 '5', now(), now());

insert into "ChannelMessage" values (default, 4, 'text',
 '6', now(), now());






