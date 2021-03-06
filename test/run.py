import sys
sys.path.append('/export/zimmerman/paulzim/ase')

from ase import Atoms
from ase.calculators.vasp import Vasp
from ase.constraints import FixAtoms
from ase.optimize import QuasiNewton
from ase.lattice.surface import fcc111,add_adsorbate, fcc110, bcc100, bcc110, hcp0001, bcc111, diamond100, diamond111, fcc100
from ase.io import write


slab = hcp0001('Ru', size=(4,5,3), vacuum=10)
#add_adsorbate(slab, 'Au', 2.5, 'fcc')

#mask = [atom.tag > 2 for atom in slab]
#slab.set_constraint(FixAtoms(mask=mask))
#calc = Vasp(xc='PBE',lreal='Auto',kpts=[2,2,1],ismear=1,sigma=0.2,algo='fast',istart=0,npar=8,encut=300)
#slab.set_calculator(calc)

#dyn = QuasiNewton(slab, trajectory='PtAu-fcc.traj')
#dyn.run(fmax=0.05)

write('test-hcp0001-2.xyz', slab)
