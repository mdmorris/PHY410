import matplotlib.pyplot as plt

def CubeResistance(R) :

	Ra = 0.
	Rb = 0.
	Rc = 0.
	
	for i in range(0,3) : Ra += 1./R[i]
	for i in range(9,12) : Rb += 1./R[i]
	for i in range(3,9) : Rc += 1./R[i]
	
	Ra = 1./Ra
	Rb = 1./Rb
	Rc = 1./Rc
	
	Rtotal = Ra + Rb + Rc
	
	return Rtotal

def OctoResistance(R) :

	Ra = 0.
	Rb = 0.
	Rc = 0.
	
	for i in range(0,4) : Ra += 1./R[i]
	for i in range(4,8) : Rb += 1./R[i]
	for i in range(8,12) : Rc += 1./R[i]
	
	Ra = 1./Ra
	Rb = 1./Rb
	Rc = 1./Rc

	Rtotal = Ra + Rb + Rc
	
	return Rtotal


R1 = [1.0]*12;
R2 = R1
resistances = [0.000001, 0.1, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5, 9.0, 9.5, 10.0, 1000000.]
Rvar = [0.]*len(resistances)


print '\nCUBE RESISTOR\n'
print 'Resistance when R1 thru R12 = 1 Ohm:', str('%0.3f' % CubeResistance(R1))+' Ohms'

xname = 'R1'
index = 0



print '\n'+xname, '\tRtotal', '\n------------------'

for i in range(0,len(resistances)):
	R2[index] = resistances[i]
	Rvar[i] = CubeResistance(R2)
	print R2[index], '\t%0.3f' % Rvar[i]

plt.plot(resistances,Rvar,'ko')
plt.title('Cube Resistor')
plt.xlabel(xname+' (Ohms)')
plt.ylabel('Total Resistance (Ohms)')
plt.axis([-0.1,10.1,-0.1,1.1])
plt.savefig('cube_'+xname.lower()+'.png')



R1 = [1.0]*12;
R2 = R1

print '\n\nOCTAHEDRON RESISTOR\n'
print 'Resistance when R1 thru R12 = 1 Ohm:', str('%0.3f' % OctoResistance(R1))+' Ohms'
print '\n'+xname, '\tRtotal', '\n------------------'


for i in range(0,len(resistances)):
	R2[index] = resistances[i]
	Rvar[i] = OctoResistance(R2)
	print R2[index], '\t%0.3f' % Rvar[i]

plt.plot(resistances,Rvar,'kx')
plt.title('Both Resistors')
plt.xlabel(xname+' (Ohms)')
plt.ylabel('Total Resistance (Ohms)')
plt.axis([-0.1,10.1,-0.1,1.1])
plt.legend(['Cube', 'Octohedron'])
plt.savefig('cube_octo_'+xname.lower()+'.png')

plt.clf()
plt.plot(resistances,Rvar,'kx')
plt.title('Octohedron Resistor')
plt.xlabel(xname+' (Ohms)')
plt.ylabel('Total Resistance (Ohms)')
plt.axis([-0.1,10.1,-0.1,1.1])
plt.savefig('octohedron_'+xname.lower()+'.png')


