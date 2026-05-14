{collider "construction"}
{obstacleID "unbreakable"}
{props "concrete" "stone"}

{extender "land_patch"
	{TerrainType "ground" "rock"} 
}

(define "cliff_vol"
	{volume %0
		{able clear {contact}{contact_ground}{obstacle}}
		;{able clear {contact}{contact_ground}}
	}
)

{lodclass "huge"}

("cliff_vol" args "body1")
("cliff_vol" args "body2")
("cliff_vol" args "body3")
("cliff_vol" args "body4")
("cliff_vol" args "body5")
("cliff_vol" args "body6")
("cliff_vol" args "body7")
("cliff_vol" args "body8")
("cliff_vol" args "body9")
("cliff_vol" args "body10")
("cliff_vol" args "body11")
("cliff_vol" args "body12")
("cliff_vol" args "body13")
("cliff_vol" args "body14")
("cliff_vol" args "body15")
("cliff_vol" args "body16")
("cliff_vol" args "body17")
("cliff_vol" args "body18")
("cliff_vol" args "body19")
("cliff_vol" args "body20")
("cliff_vol" args "body21")
("cliff_vol" args "body22")
("cliff_vol" args "body23")
("cliff_vol" args "body24")
("cliff_vol" args "body25")
("cliff_vol" args "body26")
("cliff_vol" args "body27")
("cliff_vol" args "body28")
("cliff_vol" args "body29")
("cliff_vol" args "body30")

;{compoundobstacles}