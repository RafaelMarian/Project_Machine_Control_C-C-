% Încarcă datele din fișierul CSV
data = readtable('D:\Projects\C_CODE_F.O.C_And_Machine\plots\trifazic_output.csv');

% Extrage coloanele
t = data.t;
Va = data.Va;
Vb = data.Vb;
Vc = data.Vc;

% Plotează semnalele
plot(t, Va, 'DisplayName', 'Faza A'); hold on;
plot(t, Vb, 'DisplayName', 'Faza B');
plot(t, Vc, 'DisplayName', 'Faza C');

xlabel('Timp [s]');
ylabel('Tensiune [V]');
title('Semnale trifazice 400V 50Hz');
legend show;
grid on;
%