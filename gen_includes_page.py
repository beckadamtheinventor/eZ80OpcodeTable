
with open("ti84pceg.inc") as f:
	data = f.read().split("\n")

with open("ti84pce_inc.html", "w") as f:
	f.write("<table>\n")
	for line in data:
		l = []
		if line.startswith(";"):
			continue
		elif line.startswith("?"):
			i = 1
			while line[i].isalnum() or line[i] in '_.':
				i += 1
			name = line[1:i].replace('.', '_')
			value = line[line.find(":=")+2:].strip(" \t")
			if ";" in value:
				value, comment = value.split(";", maxsplit=1)
			else:
				comment = None
			i = valnum = 0
			if "shl" in value:
				# valnuml, valnumr = value.split("shl", maxsplit=1)
				# if "h" in valnuml:
					# valnuml = int(valnuml.strip(" \t").replace("h",""), 16)
				# else:
					# valnuml = int(valnuml)
				# valnumr = valnumr.strip(" \t")
				# try:
					# if valnumr.endswith("h"):
						# valnum = int(valnumr.strip(" \t").replace("h",""), 16)
					# else:
						# valnum = int(valnumr)
				# except:
					# for line in data:
						# if line.startswith("?"+valnumr+" ") or line.startswith("?"+valnumr+"\t"):
							# valnum = line[line.find(":=")+2:].strip(" \t")
							# if ";" in valnum:
								# valnum, _ = valnum.split(";", maxsplit=1)
							# if "h" in valnum:
								# valnum = int(valnum.strip(" \t").replace("h",""), 16)
							# else:
								# valnum = int(valnum.strip(" \t"))
				# valnum = int(valnuml) * 2**(valnum)
				# f.write(f"#define TI_{name} {valnum}")
				valuel, valuer = value.split("shl", maxsplit=1)
				valuel = valuel.strip(" \t")
				valuer = valuer.strip(" \t")
				if valuel.endswith("h"):
					valuel = "0x" + valuel[:-1]
				# elif not valuel[0].isdigit():
					# valuel = "TI_"+valuel
				l.append(f"<td class=\"define\">{name}</td><td class=\"value\">({valuel} << {valuer})</td>")
			elif "+" in value:
				valuel, valuer = value.split("+", maxsplit=1)
				valuel = valuel.strip(" \t")
				valuer = valuer.strip(" \t")
				if valuel.endswith("h"):
					valuel = "0x" + valuel[:-1].upper()
				# elif not valuel[0].isdigit():
					# valuel = "TI_"+valuel
				if valuer.endswith("h"):
					valuer = "0x" + valuer[:-1].upper()
				# elif not valuer[0].isdigit():
					# valuer = "TI_"+valuer
				l.append(f"<td class=\"define\">{name}</td><td class=\"value\">({valuel} + {valuer})</td>")
			else:
				if value.endswith("h"):
					l.append(f"<td class=\"define\">{name}</td><td class=\"value\">0x{value[:-1].upper()}</td>")
				else:
					l.append(f"<td class=\"define\">{name}</td><td class=\"value\">{value}</td>")
			if comment is not None:
				l.append(f"<td class=\"comment\">{comment}</td>")
			else:
				l.append("<td class=\"comment\"></td>")
			f.write("<tr>"+"".join(l)+"</tr><br>\n")
	f.write("</table>")
